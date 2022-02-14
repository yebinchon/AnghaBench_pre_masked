
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(void)
{
 char *VAR_4, *VAR_5;
 int VAR_6 = -VAR_0;

 if (VAR_2 == ((void*)0))
  return 0;

 VAR_5 = VAR_4 = FUNC_4(VAR_2);
 if (VAR_4 == ((void*)0)) {
  FUNC_2("Not enough memory to setup output fields");
  return -VAR_1;
 }

 if (!FUNC_1(VAR_2))
  VAR_5++;

 if (!FUNC_5(VAR_5)) {
  FUNC_2("Invalid --fields key: `+'");
  goto out;
 }

 VAR_6 = FUNC_3(&VAR_3, VAR_5);

out:
 FUNC_0(VAR_4);
 return VAR_6;
}
