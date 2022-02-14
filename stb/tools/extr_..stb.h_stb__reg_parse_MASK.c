
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t stb_uint8 ;
typedef int stb_uint16 ;
typedef size_t stb_uint ;
struct TYPE_8__ {int num_charset; size_t* charset; } ;
typedef TYPE_1__ stb_matcher ;
typedef int flags ;


 int FUNC_0 (int ) ;
 int FUNC_1 (size_t*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int,int,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*) ;
 char* FUNC_5 (TYPE_1__*,int,char*,int*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static char *FUNC_7(stb_matcher *VAR_0, int VAR_1, char *VAR_2, stb_uint16 *VAR_3)
{
   int VAR_4;
   int VAR_5 = -1;
   stb_uint16 VAR_6 = VAR_1;

   while (*VAR_2) {
      switch (*VAR_2) {
         case '(':
            VAR_5 = VAR_6;
            VAR_2 = FUNC_5(VAR_0, VAR_6, VAR_2+1, &VAR_6);
            if (VAR_2 == ((void*)0) || *VAR_2 != ')')
               return ((void*)0);
            ++VAR_2;
            break;

         case '|':
         case ')':
            *VAR_3 = VAR_6;
            return VAR_2;

         case '?':
            if (VAR_5 < 0) return ((void*)0);
            FUNC_3(VAR_0, VAR_5, VAR_6);
            ++VAR_2;
            break;

         case '*':
            if (VAR_5 < 0) return ((void*)0);
            FUNC_3(VAR_0, VAR_5, VAR_6);



         case '+':
            if (VAR_5 < 0) return ((void*)0);
            FUNC_3(VAR_0, VAR_6, VAR_5);

            VAR_4 = FUNC_4(VAR_0);
            FUNC_3(VAR_0, VAR_6, VAR_4);
            VAR_6 = VAR_4;
            ++VAR_2;
            break;

         case '{':


            return ((void*)0);

         case '\\':
            ++VAR_2;
            if (!*VAR_2) return ((void*)0);


         default:
            VAR_4 = FUNC_4(VAR_0);
            FUNC_2(VAR_0, VAR_6, VAR_4, *VAR_2);
            VAR_5 = VAR_6;
            VAR_6 = VAR_4;
            ++VAR_2;
            break;

         case '$':
            VAR_4 = FUNC_4(VAR_0);
            FUNC_2(VAR_0, VAR_6, VAR_4, '\n');
            VAR_5 = VAR_6;
            VAR_6 = VAR_4;
            ++VAR_2;
            break;

         case '.':
            VAR_4 = FUNC_4(VAR_0);
            FUNC_2(VAR_0, VAR_6, VAR_4, -1);
            VAR_5 = VAR_6;
            VAR_6 = VAR_4;
            ++VAR_2;
            break;

         case '[': {
            stb_uint8 VAR_7[256];
            int VAR_8 = 0,VAR_9;
            ++VAR_2;
            if (VAR_0->num_charset == 0) {
               VAR_0->charset = (stb_uint *) FUNC_6(VAR_0, sizeof(*VAR_0->charset) * 256);
               FUNC_1(VAR_0->charset, 0, sizeof(*VAR_0->charset) * 256);
            }

            FUNC_1(VAR_7,0,sizeof(VAR_7));


            if (*VAR_2 == '^')
               ++VAR_2, VAR_8 = 1;


            if (*VAR_2 == ']') {
               VAR_7[(int) ']'] = 1;
               ++VAR_2;
            }
            while (*VAR_2 != ']') {
               stb_uint VAR_10;
               if (!*VAR_2) return ((void*)0);
               VAR_10 = *VAR_2++;
               if (VAR_2[0] == '-' && VAR_2[1] != ']') {
                  stb_uint VAR_11,VAR_12 = VAR_2[1];
                  VAR_2 += 2;
                  if (VAR_12 == 0) return ((void*)0);
                  if (VAR_10 > VAR_12) return ((void*)0);
                  for (VAR_11=VAR_10; VAR_11 <= VAR_12; ++VAR_11)
                     VAR_7[VAR_11] = 1;
               } else
                  VAR_7[VAR_10] = 1;
            }
            ++VAR_2;
            if (VAR_8) {
               int VAR_13;
               for (VAR_13=0; VAR_13 < 256; ++VAR_13)
                  VAR_7[VAR_13] = 1-VAR_7[VAR_13];
            }


            for (VAR_9=0; VAR_9 < VAR_0->num_charset; ++VAR_9) {
               int VAR_14, VAR_15[2] = { 0, 1 << VAR_9};
               for (VAR_14=0; VAR_14 < 256; ++VAR_14) {
                  unsigned int VAR_16 = VAR_15[VAR_7[VAR_14]];
                  if ((VAR_0->charset[VAR_14] & VAR_15[1]) != VAR_16)
                     break;
               }
               if (VAR_14 == 256) break;
            }

            if (VAR_9 == VAR_0->num_charset) {
               int VAR_17;
               ++VAR_0->num_charset;
               if (VAR_0->num_charset > 32) {
                  FUNC_0(0);
                  return ((void*)0);
               }
               for (VAR_17=0; VAR_17 < 256; ++VAR_17)
                  if (VAR_7[VAR_17])
                     VAR_0->charset[VAR_17] |= (1 << VAR_9);
            }

            VAR_4 = FUNC_4(VAR_0);
            FUNC_2(VAR_0, VAR_6, VAR_4, -2 - VAR_9);
            VAR_5 = VAR_6;
            VAR_6 = VAR_4;
            break;
         }
      }
   }
   *VAR_3 = VAR_6;
   return VAR_2;
}
