
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int * original_io_read; } ;
struct TYPE_9__ {TYPE_1__* desc; } ;
struct TYPE_8__ {int * read; } ;
struct TYPE_7__ {TYPE_2__* plugin; } ;
typedef TYPE_2__ RIOPlugin ;
typedef TYPE_3__ RIO ;
typedef TYPE_4__ RDyldCache ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(RDyldCache *VAR_1, RIO *VAR_2) {
 if (!VAR_2 || !VAR_2->desc || !VAR_2->desc->plugin) {
  return;
 }

 RIOPlugin *VAR_3 = VAR_2->desc->plugin;
 VAR_1->original_io_read = VAR_3->read;
 VAR_3->read = &VAR_0;
}
