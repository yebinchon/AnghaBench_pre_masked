
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ left; scalar_t__ right; } ;
struct TYPE_5__ {TYPE_1__ todayrect; } ;
typedef TYPE_2__ MONTHCAL_INFO ;
typedef scalar_t__ LRESULT ;



__attribute__((used)) static LRESULT
FUNC_0(const MONTHCAL_INFO *VAR_0)
{
  return(VAR_0->todayrect.right - VAR_0->todayrect.left);
}
