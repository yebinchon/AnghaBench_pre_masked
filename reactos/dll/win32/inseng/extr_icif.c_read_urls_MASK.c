
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct url_info {int index; int entry; int flags; int * url; } ;
struct inf_value {int dummy; } ;
struct inf_section {int dummy; } ;
struct cifcomponent {int urls; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct url_info* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct inf_section*,struct inf_value**) ;
 char* FUNC_3 (struct inf_value*) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char**,int) ;
 int FUNC_7 (struct url_info*) ;
 int FUNC_8 (struct inf_value*,int,int *,int ) ;
 int FUNC_9 (struct inf_value*,int,int **,int *) ;

__attribute__((used)) static BOOL FUNC_10(struct cifcomponent *VAR_3, struct inf_section *VAR_4)
{
    struct inf_value *VAR_5 = ((void*)0);
    struct url_info *VAR_6;
    char *VAR_7, *VAR_8;
    int VAR_9;

    while (FUNC_2(VAR_4, &VAR_5))
    {
        VAR_7 = FUNC_3(VAR_5);
        if (!VAR_7) return VAR_0;

        if (FUNC_5(VAR_7, "URL", 3))
            goto next;

        if (!VAR_7[3])
            goto next;

        VAR_9 = FUNC_6(VAR_7+3, &VAR_8, 10);
        if (VAR_8 == VAR_7+3 || *VAR_8 != 0 || VAR_9 < 1)
            goto next;
        VAR_9--;

        VAR_6 = FUNC_0(sizeof(*VAR_6));
        if (!VAR_6) goto error;

        VAR_6->index = VAR_9;

        if (!FUNC_9(VAR_5, 1, &VAR_6->url, ((void*)0)))
            goto error;
        if (!VAR_6->url || !*VAR_6->url)
        {
            FUNC_7(VAR_6);
            goto next;
        }

        if (!FUNC_8(VAR_5, 2, &VAR_6->flags, 0))
            goto error;

        FUNC_4(&VAR_3->urls, &VAR_6->entry);

    next:
        FUNC_1(VAR_7);
    }

    return VAR_2;

error:
    FUNC_1(VAR_7);
    FUNC_7(VAR_6);
    return VAR_1;
}
