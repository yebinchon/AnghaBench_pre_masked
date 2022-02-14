
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ver ;
struct table {scalar_t__ num_rows; scalar_t__ data; } ;
struct record_operatingsystem {int freephysicalmemory; int osproductsuite; int ostype; int primary; int suitemask; int totalvirtualmemorysize; int totalvisiblememorysize; int version; int systemdirectory; int servicepackminor; int servicepackmajor; int serialnumber; int oslanguage; int osarchitecture; int caption; int name; int locale; int localdatetime; int lastbootuptime; int installdate; int * csdversion; int countrycode; int codeset; int buildnumber; } ;
struct expr {int dummy; } ;
typedef enum fill_status { ____Placeholder_fill_status } fill_status ;
typedef scalar_t__ UINT ;
struct TYPE_5__ {int dwOSVersionInfoSize; int wServicePackMinor; int wServicePackMajor; scalar_t__* szCSDVersion; } ;
typedef int OSVERSIONINFOW ;
typedef TYPE_1__ OSVERSIONINFOEXW ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (struct table*,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int * FUNC_17 (scalar_t__*) ;
 int FUNC_18 (struct table*,scalar_t__,struct expr const*,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_19 (struct table*,int,int) ;

__attribute__((used)) static enum fill_status FUNC_20( struct table *VAR_4, const struct expr *VAR_5 )
{
    struct record_operatingsystem *VAR_6;
    enum fill_status VAR_7 = VAR_1;
    OSVERSIONINFOEXW VAR_8;
    UINT VAR_9 = 0;

    if (!FUNC_19( VAR_4, 1, sizeof(*VAR_6) )) return VAR_0;

    VAR_8.dwOSVersionInfoSize = sizeof(VAR_8);
    FUNC_1( (OSVERSIONINFOW *)&VAR_8 );

    VAR_6 = (struct record_operatingsystem *)VAR_4->data;
    VAR_6->buildnumber = FUNC_11( &VAR_8 );
    VAR_6->caption = FUNC_12( &VAR_8 );
    VAR_6->codeset = FUNC_5();
    VAR_6->countrycode = FUNC_6();
    VAR_6->csdversion = VAR_8.szCSDVersion[0] ? FUNC_17( VAR_8.szCSDVersion ) : ((void*)0);
    VAR_6->freephysicalmemory = FUNC_4() / 1024;
    VAR_6->installdate = VAR_2;
    VAR_6->lastbootuptime = FUNC_7();
    VAR_6->localdatetime = FUNC_8();
    VAR_6->locale = FUNC_9();
    VAR_6->name = FUNC_13( VAR_6->caption );
    VAR_6->osarchitecture = FUNC_10();
    VAR_6->oslanguage = FUNC_0();
    VAR_6->osproductsuite = 2461140;
    VAR_6->ostype = 18;
    VAR_6->primary = -1;
    VAR_6->serialnumber = VAR_3;
    VAR_6->servicepackmajor = VAR_8.wServicePackMajor;
    VAR_6->servicepackminor = VAR_8.wServicePackMinor;
    VAR_6->suitemask = 272;
    VAR_6->systemdirectory = FUNC_15();
    VAR_6->totalvirtualmemorysize = FUNC_16() / 1024;
    VAR_6->totalvisiblememorysize = VAR_6->totalvirtualmemorysize;
    VAR_6->version = FUNC_14( &VAR_8 );
    if (!FUNC_18( VAR_4, VAR_9, VAR_5, &VAR_7 )) FUNC_3( VAR_4, VAR_9 );
    else VAR_9++;

    FUNC_2("created %u rows\n", VAR_9);
    VAR_4->num_rows = VAR_9;
    return VAR_7;
}
