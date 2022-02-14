
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static unsigned int FUNC_3(int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2 < 0) {
  FUNC_2("GET_SEALS(%d) failed: %m\n", VAR_1);
  FUNC_0();
 }

 return (unsigned int)VAR_2;
}
