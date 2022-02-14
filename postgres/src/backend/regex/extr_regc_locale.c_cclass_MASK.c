
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int dummy; } ;
struct cvec {int dummy; } ;
typedef enum classes { ____Placeholder_classes } classes ;
typedef int chr ;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cvec*,char) ;
 int FUNC_2 (struct cvec*,char,float) ;
 char** VAR_2 ;
 struct cvec* FUNC_3 (struct vars*,int,int) ;
 scalar_t__ FUNC_4 (char const* const,int const*,size_t) ;
 struct cvec* FUNC_5 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t FUNC_6 (char const* const) ;

__attribute__((used)) static struct cvec *
FUNC_7(struct vars *VAR_12,
    const chr *VAR_13,
    const chr *VAR_14,
    int VAR_15)
{
 size_t VAR_16;
 struct cvec *VAR_17 = ((void*)0);
 const char *const *VAR_18;
 int VAR_19,
    VAR_20;




 VAR_16 = VAR_14 - VAR_13;
 VAR_20 = -1;
 for (VAR_18 = VAR_2, VAR_19 = 0; *VAR_18 != ((void*)0); VAR_18++, VAR_19++)
 {
  if (FUNC_6(*VAR_18) == VAR_16 &&
   FUNC_4(*VAR_18, VAR_13, VAR_16) == 0)
  {
   VAR_20 = VAR_19;
   break;
  }
 }
 if (VAR_20 == -1)
 {
  FUNC_0(VAR_0);
  return ((void*)0);
 }





 if (VAR_15 &&
  ((enum classes) VAR_20 == 133 ||
   (enum classes) VAR_20 == 129))
  VAR_20 = (int) 139;
 switch ((enum classes) VAR_20)
 {
  case 132:
   VAR_17 = FUNC_5(VAR_8, VAR_20);
   break;
  case 140:
   VAR_17 = FUNC_5(VAR_3, VAR_20);
   break;
  case 139:
   VAR_17 = FUNC_5(VAR_4, VAR_20);
   break;
  case 138:

   VAR_17 = FUNC_3(VAR_12, 0, 1);
   if (VAR_17)
    FUNC_2(VAR_17, 0, 0x7f);
   break;
  case 137:

   VAR_17 = FUNC_3(VAR_12, 2, 0);
   FUNC_1(VAR_17, '\t');
   FUNC_1(VAR_17, ' ');
   break;
  case 136:

   VAR_17 = FUNC_3(VAR_12, 0, 2);
   FUNC_2(VAR_17, 0x0, 0x1f);
   FUNC_2(VAR_17, 0x7f, 0x9f);
   break;
  case 135:
   VAR_17 = FUNC_5(VAR_5, VAR_20);
   break;
  case 131:
   VAR_17 = FUNC_5(VAR_9, VAR_20);
   break;
  case 128:






   VAR_17 = FUNC_3(VAR_12, 0, 3);
   if (VAR_17)
   {
    FUNC_2(VAR_17, '0', '9');
    FUNC_2(VAR_17, 'a', 'f');
    FUNC_2(VAR_17, 'A', 'F');
   }
   break;
  case 130:
   VAR_17 = FUNC_5(VAR_10, VAR_20);
   break;
  case 133:
   VAR_17 = FUNC_5(VAR_7, VAR_20);
   break;
  case 129:
   VAR_17 = FUNC_5(VAR_11, VAR_20);
   break;
  case 134:
   VAR_17 = FUNC_5(VAR_6, VAR_20);
   break;
 }


 if (VAR_17 == ((void*)0))
  FUNC_0(VAR_1);
 return VAR_17;
}
