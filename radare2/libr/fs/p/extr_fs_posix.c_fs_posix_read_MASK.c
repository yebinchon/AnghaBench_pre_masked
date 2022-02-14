
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_3__ {int name; void* data; } ;
typedef TYPE_1__ RFSFile ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int ,int ,int,int *) ;

__attribute__((used)) static bool FUNC_2(RFSFile *VAR_0, ut64 VAR_1, int VAR_2) {
 FUNC_0 (VAR_0->data);
 VAR_0->data = (void*)FUNC_1 (VAR_0->name, 0, VAR_2, ((void*)0));
 return 0;
}
