
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct netdev_rename {void* container_name; void* container_device; void* host_device; scalar_t__ processed; struct netdev_rename* next; int hash; } ;


 struct netdev_rename* FUNC_0 (int,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*,void*,void*,void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 struct netdev_rename* FUNC_5 (char const*,int ) ;
 int VAR_1 ;
 struct netdev_rename* VAR_2 ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (void*,char const*) ;
 void* FUNC_8 (char const*) ;

void FUNC_9(const char *VAR_3, const char *VAR_4, const char *VAR_5) {
    FUNC_3(&VAR_1);

    uint32_t VAR_6 = FUNC_6(VAR_3);
    struct netdev_rename *VAR_7 = FUNC_5(VAR_3, VAR_6);
    if(!VAR_7) {
        VAR_7 = FUNC_0(1, sizeof(struct netdev_rename));
        VAR_7->host_device = FUNC_8(VAR_3);
        VAR_7->container_device = FUNC_8(VAR_4);
        VAR_7->container_name = FUNC_8(VAR_5);
        VAR_7->hash = VAR_6;
        VAR_7->next = VAR_2;
        VAR_7->processed = 0;
        VAR_2 = VAR_7;
        VAR_0++;
        FUNC_2("CGROUP: registered network interface rename for '%s' as '%s' under '%s'", VAR_7->host_device, VAR_7->container_device, VAR_7->container_name);
    }
    else {
        if(FUNC_7(VAR_7->container_device, VAR_4) != 0 || FUNC_7(VAR_7->container_name, VAR_5) != 0) {
            FUNC_1((void *) VAR_7->container_device);
            FUNC_1((void *) VAR_7->container_name);

            VAR_7->container_device = FUNC_8(VAR_4);
            VAR_7->container_name = FUNC_8(VAR_5);
            VAR_7->processed = 0;
            VAR_0++;
            FUNC_2("CGROUP: altered network interface rename for '%s' as '%s' under '%s'", VAR_7->host_device, VAR_7->container_device, VAR_7->container_name);
        }
    }

    FUNC_4(&VAR_1);
}
