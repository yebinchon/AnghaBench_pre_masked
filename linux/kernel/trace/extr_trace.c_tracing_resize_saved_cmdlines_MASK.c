
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saved_cmdlines_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int,struct saved_cmdlines_buffer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct saved_cmdlines_buffer*) ;
 int FUNC_4 (struct saved_cmdlines_buffer*) ;
 struct saved_cmdlines_buffer* FUNC_5 (int,int ) ;
 struct saved_cmdlines_buffer* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_4)
{
 struct saved_cmdlines_buffer *VAR_5, *VAR_6;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 if (FUNC_0(VAR_4, VAR_5) < 0) {
  FUNC_4(VAR_5);
  return -VAR_0;
 }

 FUNC_1(&VAR_3);
 VAR_6 = VAR_2;
 VAR_2 = VAR_5;
 FUNC_2(&VAR_3);
 FUNC_3(VAR_6);

 return 0;
}
