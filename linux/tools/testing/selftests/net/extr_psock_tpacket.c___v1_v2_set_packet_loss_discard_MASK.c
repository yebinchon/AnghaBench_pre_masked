
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int discard ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int ,int ,void*,int) ;

__attribute__((used)) static void FUNC_3(int VAR_2)
{
 int VAR_3, VAR_4 = 1;

 VAR_3 = FUNC_2(VAR_2, VAR_1, VAR_0, (void *) &VAR_4,
    sizeof(VAR_4));
 if (VAR_3 == -1) {
  FUNC_1("setsockopt");
  FUNC_0(1);
 }
}
