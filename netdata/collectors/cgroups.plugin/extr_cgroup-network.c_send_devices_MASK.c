
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct found_device {char* host_device; char* guest_device; struct found_device* next; } ;


 struct found_device* VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;

int FUNC_1(void) {
    int VAR_1 = 0;

    struct found_device *VAR_2;
    for(VAR_2 = VAR_0; VAR_2 ; VAR_2 = VAR_2->next) {
        VAR_1++;
        FUNC_0("%s %s\n", VAR_2->host_device, (VAR_2->guest_device)?VAR_2->guest_device:VAR_2->host_device);
    }

    return VAR_1;
}
