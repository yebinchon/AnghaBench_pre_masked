
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct record {int samples; int session; } ;
struct mmap {void* data; } ;


 int FUNC_0 (struct mmap*) ;
 scalar_t__ FUNC_1 (struct record*) ;
 int FUNC_2 (struct record*,struct mmap*,void*,size_t) ;
 size_t FUNC_3 (int ,void*,int ,void*,size_t) ;

__attribute__((used)) static int FUNC_4(struct mmap *VAR_0, void *VAR_1, void *VAR_2, size_t VAR_3)
{
 struct record *VAR_4 = VAR_1;

 if (FUNC_1(VAR_4)) {
  VAR_3 = FUNC_3(VAR_4->session, VAR_0->data, FUNC_0(VAR_0), VAR_2, VAR_3);
  VAR_2 = VAR_0->data;
 }

 VAR_4->samples++;
 return FUNC_2(VAR_4, VAR_0, VAR_2, VAR_3);
}
