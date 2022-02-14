
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct collector {char* plugin; char* module; } ;
struct array_printer {scalar_t__ c; int * wb; } ;
typedef int BUFFER ;


 int FUNC_0 (int *,char*) ;

int FUNC_1(void *VAR_0, void *VAR_1) {
    struct array_printer *VAR_2 = (struct array_printer *)VAR_1;
    BUFFER *VAR_3 = VAR_2->wb;
    struct collector *VAR_4=(struct collector *) VAR_0;
    if(VAR_2->c) FUNC_0(VAR_3, ",");
    FUNC_0(VAR_3, "\n\t\t{\n\t\t\t\"plugin\": \"");
    FUNC_0(VAR_3, VAR_4->plugin);
    FUNC_0(VAR_3, "\",\n\t\t\t\"module\": \"");
    FUNC_0(VAR_3, VAR_4->module);
    FUNC_0(VAR_3, "\"\n\t\t}");
    (VAR_2->c)++;
    return 0;
}
