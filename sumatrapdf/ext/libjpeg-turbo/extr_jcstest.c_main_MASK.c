
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct jpeg_compress_struct {int input_components; int in_color_space; int err; } ;
struct TYPE_4__ {int output_message; int error_exit; } ;
struct TYPE_3__ {int jb; TYPE_2__ pub; } ;
typedef TYPE_1__ error_mgr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct jpeg_compress_struct*) ;
 int FUNC_1 (struct jpeg_compress_struct*) ;
 int FUNC_2 (struct jpeg_compress_struct*) ;
 int FUNC_3 (struct jpeg_compress_struct*) ;
 int FUNC_4 (TYPE_2__*) ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(void)
{
  int VAR_5 = -1, VAR_6 = -1;
  struct jpeg_compress_struct VAR_7;
  error_mgr VAR_8;

  FUNC_5("libjpeg-turbo colorspace extensions:\n");



  FUNC_5("  Not present at compile time\n");


  VAR_7.err = FUNC_4(&VAR_8.pub);
  VAR_8.pub.error_exit = VAR_3;
  VAR_8.pub.output_message = VAR_4;

  if(FUNC_6(VAR_8.jb)) {

    VAR_5 = 0;
    goto done;
  }

  FUNC_0(&VAR_7);
  VAR_7.input_components = 3;
  FUNC_3(&VAR_7);
  VAR_7.in_color_space = VAR_0;
  FUNC_1(&VAR_7);
  VAR_5 = 1;

  done:
  if (VAR_5)
    FUNC_5("  Working properly\n");
  else
    FUNC_5("  Not working properly.  Error returned was:\n    %s\n",
           VAR_2);

  FUNC_5("libjpeg-turbo alpha colorspace extensions:\n");



  FUNC_5("  Not present at compile time\n");


  if(FUNC_6(VAR_8.jb)) {

    VAR_6 = 0;
    goto done2;
  }

  VAR_7.in_color_space = VAR_1;
  FUNC_1(&VAR_7);
  VAR_6 = 1;

  done2:
  if (VAR_6)
    FUNC_5("  Working properly\n");
  else
    FUNC_5("  Not working properly.  Error returned was:\n    %s\n",
           VAR_2);

  FUNC_2(&VAR_7);
  return 0;
}
