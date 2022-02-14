
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* member; } ;
struct TYPE_5__ {TYPE_2__ property; } ;
struct TYPE_7__ {scalar_t__ type; int flags; TYPE_1__ x; } ;
typedef TYPE_3__ sd_bus_vtable ;
typedef int FILE ;


 int FUNC_0 (scalar_t__,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,char*) ;

__attribute__((used)) static void FUNC_2(FILE *VAR_5, const sd_bus_vtable *VAR_6) {
        const sd_bus_vtable *VAR_7;

        for (VAR_7 = VAR_6; VAR_7->type != VAR_2; VAR_7++) {
                if (!FUNC_0(VAR_7->type, VAR_3, VAR_4) ||
                    (VAR_7->flags & (VAR_0 | VAR_1)) != 0)
                        continue;

                FUNC_1(VAR_5, "%s\n", VAR_7->x.property.member);
        }
}
