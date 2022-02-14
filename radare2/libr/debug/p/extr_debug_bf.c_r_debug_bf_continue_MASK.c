
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* io; } ;
struct TYPE_11__ {TYPE_3__ iob; } ;
struct TYPE_10__ {int bfvm; } ;
struct TYPE_8__ {TYPE_1__* desc; } ;
struct TYPE_7__ {TYPE_4__* data; } ;
typedef TYPE_4__ RIOBdescbg ;
typedef TYPE_5__ RDebug ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(RDebug *VAR_1, int VAR_2, int VAR_3, int VAR_4) {
 RIOBdescbg *VAR_5 = VAR_1->iob.io->desc->data;
 FUNC_0 (VAR_5->bfvm, VAR_0);
 return 1;
}
