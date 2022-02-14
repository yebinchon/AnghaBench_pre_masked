
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevaluator {int dummy; } ;
typedef int DWORD_PTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (struct pevaluator*,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pevaluator*,char*) ;
 int FUNC_2 (struct pevaluator*,int *) ;
 int FUNC_3 (struct pevaluator*,char*,int ) ;

__attribute__((used)) static BOOL FUNC_4(struct pevaluator* VAR_3)
{
    char VAR_4[VAR_1];
    DWORD_PTR VAR_5;

    if (!FUNC_2(VAR_3, &VAR_5) || !FUNC_1(VAR_3, VAR_4)) return VAR_0;
    if (VAR_4[0] != '$') return FUNC_0(VAR_3, "assign: %s isn't a variable", VAR_4);
    FUNC_3(VAR_3, VAR_4, VAR_5);

    return VAR_2;
}
