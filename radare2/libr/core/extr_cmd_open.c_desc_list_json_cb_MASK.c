
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef long long ut64 ;
typedef int ut32 ;
struct TYPE_5__ {int perm; int uri; int fd; TYPE_1__* io; } ;
struct TYPE_4__ {TYPE_2__* desc; } ;
typedef TYPE_2__ RIODesc ;
typedef int PJ ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,long long) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_7(void *VAR_1, void *VAR_2, ut32 VAR_3) {
 PJ *VAR_4 = (PJ *)VAR_1;
 RIODesc *VAR_5 = (RIODesc *)VAR_2;

 ut64 VAR_6 = 0LL;
 FUNC_5 (VAR_4);
 FUNC_2 (VAR_4, "raised", VAR_5->io && (VAR_5->io->desc == VAR_5));
 FUNC_1 (VAR_4, "fd", VAR_5->fd);
 FUNC_4 (VAR_4, "uri", VAR_5->uri);
 FUNC_3 (VAR_4, "from", VAR_6);
 FUNC_2 (VAR_4, "writable", VAR_5->perm & VAR_0);
 FUNC_1 (VAR_4, "size", FUNC_6 (VAR_5));
 FUNC_0 (VAR_4);
 return 1;
}
