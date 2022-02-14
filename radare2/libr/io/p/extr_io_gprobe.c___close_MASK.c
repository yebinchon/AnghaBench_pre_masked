
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {int gport; } ;
typedef TYPE_1__ RIOGprobe ;
typedef TYPE_2__ RIODesc ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2 (RIODesc *VAR_0) {
 RIOGprobe *VAR_1;

 if (!VAR_0 || !VAR_0->data) {
  return -1;
 }
 VAR_1 = (RIOGprobe *)VAR_0->data;

 FUNC_1 (&VAR_1->gport);
 FUNC_0 (VAR_0->data);

 return 0;
}
