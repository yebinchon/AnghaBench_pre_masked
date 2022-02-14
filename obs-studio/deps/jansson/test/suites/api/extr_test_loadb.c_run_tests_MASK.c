
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {int line; int text; } ;
typedef TYPE_1__ json_error_t ;


 int fail (char*) ;
 int json_decref (int *) ;
 int * json_loadb (char const*,size_t,int ,TYPE_1__*) ;
 scalar_t__ strcmp (int ,char*) ;
 size_t strlen (char const*) ;

__attribute__((used)) static void run_tests()
{
    json_t *json;
    json_error_t error;
    const char str[] = "[\"A\", {\"B\": \"C\"}, 1, 2, 3]garbage";
    size_t len = strlen(str) - strlen("garbage");

    json = json_loadb(str, len, 0, &error);
    if(!json) {
        fail("json_loadb failed on a valid JSON buffer");
    }
    json_decref(json);

    json = json_loadb(str, len - 1, 0, &error);
    if (json) {
        json_decref(json);
        fail("json_loadb should have failed on an incomplete buffer, but it didn't");
    }
    if(error.line != 1) {
        fail("json_loadb returned an invalid line number on fail");
    }
    if(strcmp(error.text, "']' expected near end of file") != 0) {
        fail("json_loadb returned an invalid error message for an unclosed top-level array");
    }
}
