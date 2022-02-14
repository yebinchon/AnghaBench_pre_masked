
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Range {void* end; void* begin; } ;
struct TYPE_2__ {int arp; } ;
struct Masscan {TYPE_1__ scan_type; int ports; scalar_t__ echo; scalar_t__ echo_all; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 void* VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (scalar_t__,char*,char*) ;
 int FUNC_3 (struct Masscan*,char*,char*) ;
 int FUNC_4 (int *,void*,void*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct Masscan *VAR_2, const char *VAR_3, const char *VAR_4)
{
    struct Range VAR_5;

    FUNC_1(VAR_3);
    FUNC_1(VAR_4);

    if (VAR_2->echo) {
        if (VAR_2->scan_type.arp || VAR_2->echo_all)
            FUNC_2(VAR_2->echo, "arpscan = %s\n", VAR_2->scan_type.arp?"true":"false");
        return 0;
    }
    VAR_5.begin = VAR_1;
    VAR_5.end = VAR_1;
    FUNC_4(&VAR_2->ports, VAR_5.begin, VAR_5.end);
    FUNC_5(&VAR_2->ports);
    FUNC_3(VAR_2, "router-mac", "ff-ff-ff-ff-ff-ff");
    VAR_2->scan_type.arp = 1;
    FUNC_0(5, "--arpscan\n");
    return VAR_0;
}
