
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ParseTypedefData {char* ptr; } ;


 int FUNC_0 (struct ParseTypedefData*,int) ;
 long FUNC_1 (char*,char**,int) ;

__attribute__((used)) static int FUNC_2(struct ParseTypedefData* VAR_0, long* VAR_1)
{
    char* VAR_2;

    *VAR_1 = FUNC_1(VAR_0->ptr, &VAR_2, 10);
    FUNC_0(VAR_0, VAR_2 == VAR_0->ptr);
    VAR_0->ptr = VAR_2;
    return 0;
}
