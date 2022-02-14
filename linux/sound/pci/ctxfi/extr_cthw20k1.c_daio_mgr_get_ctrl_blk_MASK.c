
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {int dummy; } ;
struct daio_mgr_ctrl_blk {void* spictl; void* spoctl; void* i2sctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct hw*,int ) ;
 struct daio_mgr_ctrl_blk* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct hw *VAR_5, void **VAR_6)
{
 struct daio_mgr_ctrl_blk *VAR_7;

 *VAR_6 = ((void*)0);
 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->i2sctl = FUNC_0(VAR_5, VAR_2);
 VAR_7->spoctl = FUNC_0(VAR_5, VAR_4);
 VAR_7->spictl = FUNC_0(VAR_5, VAR_3);

 *VAR_6 = VAR_7;

 return 0;
}
