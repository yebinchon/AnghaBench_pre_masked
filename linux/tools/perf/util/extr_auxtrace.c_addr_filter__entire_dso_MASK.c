
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int file_size; } ;
struct dso {TYPE_1__ data; } ;
struct addr_filter {int size; scalar_t__ addr; int filename; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dso*,int *) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct addr_filter *VAR_1, struct dso *VAR_2)
{
 if (FUNC_0(VAR_2, ((void*)0))) {
  FUNC_1("Failed to determine filter for %s\nCannot determine file size.\n",
         VAR_1->filename);
  return -VAR_0;
 }

 VAR_1->addr = 0;
 VAR_1->size = VAR_2->data.file_size;

 return 0;
}
