
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct lavfi_pad {scalar_t__ dir; scalar_t__ type; int name; TYPE_5__ in_fmt; TYPE_1__ pending; int pin; } ;
struct lavfi {int draining_recover; scalar_t__ initialized; } ;


 int FUNC_0 (struct lavfi*,char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct lavfi*,char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__,TYPE_5__) ;
 scalar_t__ FUNC_4 (TYPE_1__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__ FUNC_7 (int ) ;
 int FUNC_8 (struct lavfi*) ;

__attribute__((used)) static void FUNC_9(struct lavfi *VAR_2, struct lavfi_pad *VAR_3)
{
    FUNC_2(VAR_3->dir == VAR_1);

    if (VAR_3->pending.type || VAR_2->draining_recover)
        return;

    VAR_3->pending = FUNC_7(VAR_3->pin);

    if (VAR_3->pending.type && VAR_3->pending.type != VAR_0 &&
        VAR_3->pending.type != VAR_3->type)
    {
        FUNC_0(VAR_2, "unknown frame %s\n", FUNC_5(VAR_3->pending.type));
        FUNC_6(&VAR_3->pending);
    }

    if (FUNC_4(VAR_3->pending) && VAR_3->in_fmt.type &&
        !FUNC_3(VAR_3->pending, VAR_3->in_fmt))
    {
        if (!VAR_2->draining_recover)
            FUNC_1(VAR_2, "format change on %s\n", VAR_3->name);
        VAR_2->draining_recover = 1;
        if (VAR_2->initialized)
            FUNC_8(VAR_2);
    }
}
