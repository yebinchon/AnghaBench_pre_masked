
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ zip_uint64_t ;
typedef int zip_int64_t ;
typedef void* uInt ;
struct zip_source {int dummy; } ;
struct TYPE_2__ {scalar_t__ avail_out; void* avail_in; int * next_in; int * next_out; } ;
struct deflate {scalar_t__* e; int eof; TYPE_1__ zstr; scalar_t__ buffer; } ;
typedef int Bytef ;


 scalar_t__ VAR_0 ;







 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct zip_source*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (struct zip_source*,scalar_t__,int) ;

__attribute__((used)) static zip_int64_t
FUNC_3(struct zip_source *VAR_2, struct deflate *VAR_3,
  void *VAR_4, zip_uint64_t VAR_5)
{
    int VAR_6, VAR_7;
    zip_int64_t VAR_8;

    if (VAR_3->e[0] != 0)
 return -1;

    if (VAR_5 == 0)
 return 0;

    VAR_3->zstr.next_out = (Bytef *)VAR_4;
    VAR_3->zstr.avail_out = (uInt)VAR_5;

    VAR_6 = 0;
    while (!VAR_6 && VAR_3->zstr.avail_out) {
 VAR_7 = FUNC_0(&VAR_3->zstr, VAR_1);

 switch (VAR_7) {
 case 130:
     break;

 case 129:
     VAR_3->eof = 1;
     VAR_6 = 1;
     break;

 case 134:
     if (VAR_3->zstr.avail_in == 0) {
  if (VAR_3->eof) {
      VAR_6 = 1;
      break;
  }

  if ((VAR_8=FUNC_2(VAR_2, VAR_3->buffer, sizeof(VAR_3->buffer))) < 0) {
      FUNC_1(VAR_2, VAR_3->e, VAR_3->e+1);
      VAR_6 = 1;
      break;
  }
  else if (VAR_8 == 0)
      VAR_3->eof = 1;
  else {
      VAR_3->zstr.next_in = (Bytef *)VAR_3->buffer;
      VAR_3->zstr.avail_in = (uInt)VAR_8;
  }
  continue;
     }

 case 131:
 case 133:
 case 128:
 case 132:
     VAR_3->e[0] = VAR_0;
     VAR_3->e[1] = VAR_7;
     VAR_6 = 1;
     break;
 }
    }

    if (VAR_3->zstr.avail_out < VAR_5)
 return (zip_int64_t)(VAR_5 - VAR_3->zstr.avail_out);

    return (VAR_3->e[0] == 0) ? 0 : -1;
}
