
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lSelMin; scalar_t__ lSelMax; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int BOOL ;



__attribute__((used)) static inline BOOL
FUNC_0 (const TRACKBAR_INFO *VAR_0)
{
    return VAR_0->lSelMin != VAR_0->lSelMax;
}
