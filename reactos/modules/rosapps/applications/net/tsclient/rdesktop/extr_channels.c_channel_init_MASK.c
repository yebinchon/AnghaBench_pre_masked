
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef int VCHANNEL ;
struct TYPE_4__ {scalar_t__ encryption; } ;
typedef int STREAM ;
typedef TYPE_1__ RDPCLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__) ;

STREAM
FUNC_2(RDPCLIENT * VAR_2, VCHANNEL * VAR_3, uint32 VAR_4)
{
 STREAM VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_2->encryption ? VAR_0 : 0, VAR_4 + 8);
 FUNC_0(VAR_5, VAR_1, 8);
 return VAR_5;
}
