
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char const* uri; int perm; int * desc; } ;
struct TYPE_5__ {int files; } ;
typedef int RIODesc ;
typedef TYPE_1__ RIO ;
typedef TYPE_2__ FindFile ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;

__attribute__((used)) static RIODesc *FUNC_1(RIO *VAR_1, const char *VAR_2, int VAR_3) {
 FindFile VAR_4 = {
  .uri = VAR_2,
  .perm = VAR_3,
  .desc = ((void*)0),
 };
 FUNC_0 (VAR_1->files, VAR_0, &VAR_4);
 return VAR_4.desc;
}
