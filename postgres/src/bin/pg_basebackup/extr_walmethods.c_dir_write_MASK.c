
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int * Walfile ;
struct TYPE_4__ {scalar_t__ compression; } ;
struct TYPE_3__ {int currpos; int fd; int gzfp; } ;
typedef TYPE_1__ DirectoryMethodFile ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_1 (int ,void const*,size_t) ;
 scalar_t__ FUNC_2 (int ,void const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_3(Walfile VAR_1, const void *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4;
 DirectoryMethodFile *VAR_5 = (DirectoryMethodFile *) VAR_1;

 FUNC_0(VAR_1 != ((void*)0));






  VAR_4 = FUNC_2(VAR_5->fd, VAR_2, VAR_3);
 if (VAR_4 > 0)
  VAR_5->currpos += VAR_4;
 return VAR_4;
}
