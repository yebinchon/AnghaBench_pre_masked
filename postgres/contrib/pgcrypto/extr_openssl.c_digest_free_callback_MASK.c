
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ owner; struct TYPE_5__* next; } ;
typedef scalar_t__ ResourceReleasePhase ;
typedef TYPE_1__ OSSLDigest ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_2(ResourceReleasePhase VAR_4,
      bool VAR_5,
      bool VAR_6,
      void *VAR_7)
{
 OSSLDigest *VAR_8;
 OSSLDigest *VAR_9;

 if (VAR_4 != VAR_1)
  return;

 VAR_9 = VAR_3;
 while (VAR_9)
 {
  VAR_8 = VAR_9;
  VAR_9 = VAR_8->next;

  if (VAR_8->owner == VAR_0)
  {
   if (VAR_5)
    FUNC_0(VAR_2, "pgcrypto digest reference leak: digest %p still referenced", VAR_8);
   FUNC_1(VAR_8);
  }
 }
}
