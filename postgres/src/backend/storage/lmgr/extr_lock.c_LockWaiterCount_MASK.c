
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {int nRequested; } ;
struct TYPE_5__ {scalar_t__ locktag_lockmethodid; } ;
typedef int LWLock ;
typedef TYPE_1__ LOCKTAG ;
typedef scalar_t__ LOCKMETHODID ;
typedef TYPE_2__ LOCK ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int * FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__ const*) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,void const*,int ,int ,int*) ;
 scalar_t__ FUNC_7 (int ) ;

int
FUNC_8(const LOCKTAG *VAR_5)
{
 LOCKMETHODID VAR_6 = VAR_5->locktag_lockmethodid;
 LOCK *VAR_7;
 bool VAR_8;
 uint32 VAR_9;
 LWLock *VAR_10;
 int VAR_11 = 0;

 if (VAR_6 <= 0 || VAR_6 >= FUNC_7(VAR_4))
  FUNC_5(VAR_0, "unrecognized lock method: %d", VAR_6);

 VAR_9 = FUNC_4(VAR_5);
 VAR_10 = FUNC_3(VAR_9);
 FUNC_1(VAR_10, VAR_2);

 VAR_7 = (LOCK *) FUNC_6(VAR_3,
            (const void *) VAR_5,
            VAR_9,
            VAR_1,
            &VAR_8);
 if (VAR_8)
 {
  FUNC_0(VAR_7 != ((void*)0));
  VAR_11 = VAR_7->nRequested;
 }
 FUNC_2(VAR_10);

 return VAR_11;
}
