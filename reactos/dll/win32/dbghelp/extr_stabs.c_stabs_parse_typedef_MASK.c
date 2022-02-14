
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symt {int dummy; } ;
struct module {int dummy; } ;
struct ParseTypedefData {int err_idx; char const* ptr; TYPE_1__* errors; scalar_t__ idx; struct module* module; } ;
struct TYPE_2__ {char const* ptr; int line; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (struct ParseTypedefData*,char const*,struct symt**) ;
 char const* FUNC_4 (char const*,char) ;

__attribute__((used)) static int FUNC_5(struct module* VAR_2, const char* VAR_3,
                               const char* VAR_4)
{
    struct ParseTypedefData VAR_5;
    struct symt* VAR_6;
    int VAR_7 = -1;



    FUNC_1("%s => %s\n", VAR_4, FUNC_2(VAR_3));
    VAR_5.module = VAR_2;
    VAR_5.idx = 0;



    for (VAR_5.ptr = VAR_3 - 1; ;)
    {
        VAR_5.ptr = FUNC_4(VAR_5.ptr + 1, ':');
        if (VAR_5.ptr == ((void*)0) || *++VAR_5.ptr != ':') break;
    }
    if (VAR_5.ptr)
    {
 if (*VAR_5.ptr != '(') VAR_5.ptr++;

 if (*VAR_5.ptr != '(') VAR_5.ptr++;
 VAR_7 = FUNC_3(&VAR_5, VAR_4, &VAR_6);
    }

    if (VAR_7 == -1 || *VAR_5.ptr)
    {
 FUNC_0("Failure on %s at %s\n", FUNC_2(VAR_3), FUNC_2(VAR_5.ptr));

 return VAR_0;
    }

    return VAR_1;
}
