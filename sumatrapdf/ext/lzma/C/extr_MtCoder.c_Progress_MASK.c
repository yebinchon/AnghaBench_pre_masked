
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt64 ;
struct TYPE_4__ {scalar_t__ (* Progress ) (TYPE_1__*,int ,int ) ;} ;
typedef scalar_t__ SRes ;
typedef TYPE_1__ ICompressProgress ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static SRes FUNC_1(ICompressProgress *VAR_2, UInt64 VAR_3, UInt64 VAR_4)
{
  return (VAR_2 && VAR_2->Progress(VAR_2, VAR_3, VAR_4) != VAR_1) ? VAR_0 : VAR_1;
}
