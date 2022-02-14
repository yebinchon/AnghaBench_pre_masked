
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu_chunk {int nr_pages; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct pcpu_chunk *VAR_2)
{
 return VAR_2->nr_pages * VAR_0 / VAR_1;
}
