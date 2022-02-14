
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pcre_uint32 ;
typedef int pcre_uchar ;
struct TYPE_4__ {int fcc; } ;
typedef TYPE_1__ compile_data ;
typedef int BOOL ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;


 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;






 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int const*,int ,TYPE_1__ const*,int*,int const*,int*) ;
 int* FUNC_5 (int*,int ,int ,int*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(pcre_uchar *VAR_11, BOOL VAR_12, const compile_data *VAR_13)
{
register pcre_uchar VAR_14;
const pcre_uchar *VAR_15;
pcre_uchar *VAR_16;
pcre_uint32 VAR_17[8];
int VAR_18;

for (;;)
  {
  VAR_14 = *VAR_11;







  if (VAR_14 >= VAR_9) return;

  if (VAR_14 >= 146 && VAR_14 <= 134)
    {
    VAR_14 -= FUNC_6(VAR_14) - 146;
    VAR_15 = (VAR_14 <= 190) ?
      FUNC_5(VAR_11, VAR_12, VAR_13->fcc, VAR_17) : ((void*)0);
    VAR_17[1] = VAR_14 == 146 || VAR_14 == 160 || VAR_14 == 149 || VAR_14 == 130;

    VAR_18 = 1000;
    if (VAR_15 != ((void*)0) && FUNC_4(VAR_15, VAR_12, VAR_13, VAR_17, VAR_15, &VAR_18))
      {
      switch(VAR_14)
        {
        case 146:
        *VAR_11 += 154 - 146;
        break;

        case 192:
        *VAR_11 += 154 - 192;
        break;

        case 160:
        *VAR_11 += 158 - 160;
        break;

        case 196:
        *VAR_11 += 158 - 196;
        break;

        case 149:
        *VAR_11 += 156 - 149;
        break;

        case 194:
        *VAR_11 += 156 - 194;
        break;

        case 130:
        *VAR_11 += 152 - 130;
        break;

        case 190:
        *VAR_11 += 152 - 190;
        break;
        }
      }
    VAR_14 = *VAR_11;
    }
  else if (VAR_14 == VAR_1 || VAR_14 == VAR_6 || VAR_14 == 128)
    {

    if (VAR_14 == 128)
      VAR_16 = VAR_11 + FUNC_0(VAR_11, 1);
    else

      VAR_16 = VAR_11 + 1 + (32 / sizeof(pcre_uchar));

    VAR_14 = *VAR_16;
    if (VAR_14 >= 201 && VAR_14 <= 206)
      {

      VAR_15 = FUNC_5(VAR_11, VAR_12, VAR_13->fcc, VAR_17);

      VAR_17[1] = (VAR_14 & 1) == 0;

      VAR_18 = 1000;
      if (FUNC_4(VAR_15, VAR_12, VAR_13, VAR_17, VAR_15, &VAR_18))
        {
        switch (VAR_14)
          {
          case 201:
          case 205:
          *VAR_16 = VAR_5;
          break;

          case 204:
          case 208:
          *VAR_16 = VAR_2;
          break;

          case 203:
          case 207:
          *VAR_16 = VAR_3;
          break;

          case 202:
          case 206:
          *VAR_16 = VAR_4;
          break;
          }
        }
      }
    VAR_14 = *VAR_11;
    }

  switch(VAR_14)
    {
    case 200:
    return;

    case 132:
    case 140:
    case 138:
    case 142:
    case 133:
    case 141:
    case 135:
    case 137:
    case 136:
    if (VAR_11[1] == VAR_8 || VAR_11[1] == VAR_7) VAR_11 += 2;
    break;

    case 131:
    case 139:
    case 143:
    case 134:
    if (VAR_11[1 + VAR_0] == VAR_8 || VAR_11[1 + VAR_0] == VAR_7)
      VAR_11 += 2;
    break;


    case 128:
    VAR_11 += FUNC_0(VAR_11, 1);
    break;


    case 197:
    case 150:
    case 147:
    case 144:
    VAR_11 += VAR_11[1];
    break;
    }



  VAR_11 += FUNC_3(VAR_10)[VAR_14];
  (void)(VAR_12);

  }
}
