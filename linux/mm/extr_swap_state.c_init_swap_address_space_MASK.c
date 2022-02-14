
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_space {int * a_ops; int i_mmap_writable; int i_pages; } ;


 unsigned int FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 struct address_space* FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (struct address_space*) ;
 unsigned int* VAR_4 ;
 int VAR_5 ;
 struct address_space** VAR_6 ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(unsigned int VAR_7, unsigned long VAR_8)
{
 struct address_space *VAR_9, *VAR_10;
 unsigned int VAR_11, VAR_12;

 VAR_12 = FUNC_0(VAR_8, VAR_2);
 VAR_9 = FUNC_2(VAR_12, sizeof(struct address_space), VAR_1);
 if (!VAR_9)
  return -VAR_0;
 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  VAR_10 = VAR_9 + VAR_11;
  FUNC_4(&VAR_10->i_pages, VAR_3);
  FUNC_1(&VAR_10->i_mmap_writable, 0);
  VAR_10->a_ops = &VAR_5;

  FUNC_3(VAR_10);
 }
 VAR_4[VAR_7] = VAR_12;
 VAR_6[VAR_7] = VAR_9;

 return 0;
}
