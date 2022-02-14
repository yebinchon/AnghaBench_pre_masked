
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* renderCreateTexture ) (int ,int ,int,int,int,unsigned char const*) ;int userPtr; } ;
struct TYPE_5__ {TYPE_1__ params; } ;
typedef TYPE_2__ NVGcontext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int,int,unsigned char const*) ;

int FUNC_1(NVGcontext* VAR_1, int VAR_2, int VAR_3, int VAR_4, const unsigned char* VAR_5)
{
 return VAR_1->params.renderCreateTexture(VAR_1->params.userPtr, VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
}
