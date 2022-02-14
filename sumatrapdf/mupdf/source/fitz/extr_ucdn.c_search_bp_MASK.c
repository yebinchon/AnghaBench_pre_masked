
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int member_2; int from; int member_1; int member_0; } ;
typedef TYPE_1__ BracketPair ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static BracketPair *FUNC_1(uint32_t VAR_3)
{
 BracketPair VAR_4 = {0,0,2};
 BracketPair *VAR_5;

 VAR_4.from = VAR_3;
 VAR_5 = (BracketPair *) FUNC_0(&VAR_4, VAR_1, VAR_0,
  sizeof(BracketPair), VAR_2);
 return VAR_5;
}
