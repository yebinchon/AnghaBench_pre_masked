
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symt_enum {int dummy; } ;
struct ParseTypedefData {char* ptr; int idx; scalar_t__ buf; int module; } ;


 int FUNC_0 (struct ParseTypedefData*,int) ;
 int FUNC_1 (struct ParseTypedefData*) ;
 int FUNC_2 (struct ParseTypedefData*,long*) ;
 int FUNC_3 (int ,struct symt_enum*,scalar_t__,long) ;

__attribute__((used)) static inline int FUNC_4(struct ParseTypedefData* VAR_0,
                                      struct symt_enum* VAR_1)
{
    long VAR_2;
    int VAR_3;

    while (*VAR_0->ptr != ';')
    {
 VAR_3 = VAR_0->idx;
 FUNC_0(VAR_0, FUNC_1(VAR_0) == -1);
 FUNC_0(VAR_0, FUNC_2(VAR_0, &VAR_2) == -1);
 FUNC_0(VAR_0, *VAR_0->ptr++ != ',');
 FUNC_3(VAR_0->module, VAR_1, VAR_0->buf + VAR_3, VAR_2);
 VAR_0->idx = VAR_3;
    }
    VAR_0->ptr++;
    return 0;
}
