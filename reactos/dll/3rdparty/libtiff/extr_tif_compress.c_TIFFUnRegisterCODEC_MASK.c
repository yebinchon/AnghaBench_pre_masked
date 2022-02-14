
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; TYPE_2__* info; } ;
typedef TYPE_1__ codec_t ;
struct TYPE_7__ {int name; } ;
typedef TYPE_2__ TIFFCodec ;


 int FUNC_0 (int ,char*,char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

void
FUNC_2(TIFFCodec* VAR_1)
{
 codec_t* VAR_2;
 codec_t** VAR_3;

 for (VAR_3 = &VAR_0; (VAR_2 = *VAR_3) != ((void*)0); VAR_3 = &VAR_2->next)
  if (VAR_2->info == VAR_1) {
   *VAR_3 = VAR_2->next;
   FUNC_1(VAR_2);
   return;
  }
 FUNC_0(0, "TIFFUnRegisterCODEC",
     "Cannot remove compression scheme %s; not registered", VAR_1->name);
}
