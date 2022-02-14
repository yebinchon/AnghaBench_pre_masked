
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char gchar ;
typedef int gboolean ;
struct TYPE_4__ {int find; int * dialog; } ;
struct TYPE_3__ {int all; int replace; int find; int * dialog; } ;
typedef int GtkWidget ;


 int FUNC_0 (int *) ;
 TYPE_2__ VAR_0 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_3(GtkWidget * VAR_2, GtkWidget * VAR_3)
{
    const gchar *VAR_4;
    gboolean VAR_5;

    VAR_4 = FUNC_1(FUNC_0(VAR_2));

    if (!VAR_4)
 return;

    VAR_5 = (VAR_4[0] != '\0');

    if (VAR_3 == VAR_0.dialog)
    {
 FUNC_2(VAR_0.find, VAR_5);
    }

    if (VAR_3 == VAR_1.dialog)
    {
 FUNC_2(VAR_1.find, VAR_5);
 FUNC_2(VAR_1.replace, VAR_5);
 FUNC_2(VAR_1.all, VAR_5);
    }
}
