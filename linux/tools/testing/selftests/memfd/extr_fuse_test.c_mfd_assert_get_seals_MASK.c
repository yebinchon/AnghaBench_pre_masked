
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long __u64 ;


 int VAR_0 ;
 int FUNC_0 () ;
 long FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static __u64 FUNC_3(int VAR_1)
{
 long VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2 < 0) {
  FUNC_2("GET_SEALS(%d) failed: %m\n", VAR_1);
  FUNC_0();
 }

 return VAR_2;
}
