
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_stat {int bytes_alloc; int bytes_req; } ;


 double FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, void *VAR_1)
{
 double VAR_2, VAR_3;
 struct alloc_stat *VAR_4 = VAR_0;
 struct alloc_stat *VAR_5 = VAR_1;

 VAR_2 = FUNC_0(VAR_4->bytes_req, VAR_4->bytes_alloc);
 VAR_3 = FUNC_0(VAR_5->bytes_req, VAR_5->bytes_alloc);

 if (VAR_2 < VAR_3)
  return -1;
 else if (VAR_2 > VAR_3)
  return 1;
 return 0;
}
