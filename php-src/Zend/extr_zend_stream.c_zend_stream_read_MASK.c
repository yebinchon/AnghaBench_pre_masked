
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t (* reader ) (int ,char*,size_t) ;int handle; scalar_t__ isatty; } ;
struct TYPE_7__ {TYPE_1__ stream; } ;
struct TYPE_8__ {TYPE_2__ handle; } ;
typedef TYPE_3__ zend_file_handle ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static ssize_t FUNC_2(zend_file_handle *VAR_1, char *VAR_2, size_t VAR_3)
{
 if (VAR_1->handle.stream.isatty) {
  int VAR_4 = '*';
  size_t VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_3 && (VAR_4 = FUNC_1(VAR_1)) != VAR_0 && VAR_4 != '\n'; ++VAR_5) {
   VAR_2[VAR_5] = (char)VAR_4;
  }
  if (VAR_4 == '\n') {
   VAR_2[VAR_5++] = (char)VAR_4;
  }

  return VAR_5;
 }
 return VAR_1->handle.stream.reader(VAR_1->handle.stream.handle, VAR_2, VAR_3);
}
