
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct zip_dirent {int version_needed; int bitflags; int * comment; int * extra_fields; scalar_t__ ext_attrib; scalar_t__ int_attrib; scalar_t__ disk_number; scalar_t__ last_mod; int comp_method; scalar_t__ version_madeby; } ;
struct tm {int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_zone; int tm_gmtoff; scalar_t__ tm_isdst; scalar_t__ tm_yday; scalar_t__ tm_wday; scalar_t__ tm_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct tm* FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (struct tm*) ;
 int FUNC_4 (scalar_t__*) ;

void
FUNC_5(struct zip_dirent *VAR_1)
{
    static struct tm VAR_2;
    static time_t VAR_3 = 0;


    if (VAR_3 == 0) {





 VAR_2.tm_sec = 0;
 VAR_2.tm_min = 32;
 VAR_2.tm_hour = 23;
 VAR_2.tm_mday = 24;
 VAR_2.tm_mon = 11;
 VAR_2.tm_year = 96;
 VAR_2.tm_wday = 0;
 VAR_2.tm_yday = 0;
 VAR_2.tm_isdst = 0;
 VAR_3 = FUNC_3(&VAR_2);
    }

    VAR_1->version_madeby = 0;
    VAR_1->version_needed = 20;
    VAR_1->bitflags = 2;
    VAR_1->comp_method = VAR_0;
    VAR_1->last_mod = VAR_3;

    VAR_1->disk_number = 0;
    VAR_1->int_attrib = 0;
    VAR_1->ext_attrib = 0;

    FUNC_0(VAR_1->extra_fields);
    VAR_1->extra_fields = ((void*)0);
    FUNC_1(VAR_1->comment);
    VAR_1->comment = ((void*)0);
}
