
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_11__ {int id; } ;
struct TYPE_10__ {int bin; } ;
struct TYPE_9__ {int fd; } ;
typedef TYPE_1__ RCoreFile ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RBinFile ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(RCore *VAR_0, const char *VAR_1, ut64 VAR_2) {
 int VAR_3 = 0;
 RCoreFile *VAR_4 = FUNC_4 (VAR_0);
 if (VAR_4) {
  RBinFile *VAR_5 = FUNC_1 (VAR_0->bin, VAR_4->fd);
  VAR_3 = FUNC_2 (VAR_0->bin, VAR_5->id, VAR_2);
 }
 FUNC_3 (VAR_0, FUNC_0 (VAR_0->bin));
 return VAR_3;
}
