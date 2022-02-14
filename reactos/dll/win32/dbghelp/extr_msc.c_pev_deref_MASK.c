
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v2 ;
struct pevaluator {int csw; } ;
typedef int res ;
typedef int DWORD_PTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (struct pevaluator*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pevaluator*,int *) ;
 int FUNC_2 (struct pevaluator*,char*) ;
 int FUNC_3 (char*,int,char*,int ) ;
 int FUNC_4 (int ,int ,int *,int) ;

__attribute__((used)) static BOOL FUNC_5(struct pevaluator* VAR_3)
{
    char VAR_4[VAR_1];
    DWORD_PTR VAR_5, VAR_6;

    if (!FUNC_1(VAR_3, &VAR_5)) return VAR_0;
    if (!FUNC_4(VAR_3->csw, VAR_5, &VAR_6, sizeof(VAR_6)))
        return FUNC_0(VAR_3, "deref: cannot read mem at %lx\n", VAR_5);
    FUNC_3(VAR_4, sizeof(VAR_4), "%ld", VAR_6);
    FUNC_2(VAR_3, VAR_4);
    return VAR_2;
}
