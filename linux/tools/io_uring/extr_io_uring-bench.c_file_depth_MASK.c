
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submitter {int nr_files; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned FUNC_0(struct submitter *VAR_1)
{
 return (VAR_0 + VAR_1->nr_files - 1) / VAR_1->nr_files;
}
