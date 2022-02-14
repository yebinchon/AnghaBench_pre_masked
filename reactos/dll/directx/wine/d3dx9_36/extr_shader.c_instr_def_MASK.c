
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct instr_info {int dummy; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int,double,double,double,double) ;

__attribute__((used)) static int FUNC_1(const struct instr_info *VAR_1, DWORD **VAR_2, char *VAR_3, BOOL VAR_4)
{
    int VAR_5 = FUNC_0(VAR_3, "    def c%d, %g, %g, %g, %g\n", *(*VAR_2+1) & VAR_0,
                      (double)*(float*)(*VAR_2+2), (double)*(float*)(*VAR_2+3),
                      (double)*(float*)(*VAR_2+4), (double)*(float*)(*VAR_2+5));
    *VAR_2 += 6;
    return VAR_5;
}
