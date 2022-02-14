
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (char const*,int,int,int) ;
 int FUNC_1 (char const*,int,char const*) ;
 int FUNC_2 (int,char**,char*) ;
 char* VAR_6 ;
 int FUNC_3 (char*,int *,int ) ;
 int FUNC_4 () ;

int FUNC_5(int VAR_7, char **VAR_8)
{
 const char *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 uint32_t VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
 int VAR_14, VAR_15 = VAR_5;

 while ((VAR_14 = FUNC_2(VAR_7, VAR_8, "F:PGmk:v:po:")) != -1) {
  switch (VAR_14) {

  case 'F':
   VAR_9 = VAR_6;
   break;
  case 'P':
   VAR_13 |= VAR_2;
   break;
  case 'G':
   VAR_13 |= VAR_0;
   break;

  case 'm':
   VAR_15 = 129;
   break;
  case 'k':
   VAR_11 = FUNC_3(VAR_6, ((void*)0), 0);
   VAR_13 |= VAR_1;
   break;
  case 'v':
   VAR_12 = FUNC_3(VAR_6, ((void*)0), 0);
   VAR_13 |= VAR_4;
   break;

  case 'p':
   VAR_15 = 128;
   break;
  case 'o':
   VAR_10 = VAR_6;
   break;
  default:
   goto out;
  }
 }

 if (!(VAR_13 & VAR_3) || !VAR_9)
  goto out;

 switch (VAR_15) {
 case 129:
  return FUNC_0(VAR_9, VAR_13, VAR_11, VAR_12);
 case 128:
  return FUNC_1(VAR_9, VAR_13, VAR_10);
 }
out:
 FUNC_4();
 return -1;
}
