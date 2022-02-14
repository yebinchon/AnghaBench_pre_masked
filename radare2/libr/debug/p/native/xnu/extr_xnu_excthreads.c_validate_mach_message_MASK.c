
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int mach_msg_type_number_t ;
typedef int mach_msg_port_descriptor_t ;
typedef int mach_msg_header_t ;
typedef int mach_msg_body_t ;
typedef int mach_exception_data_t ;
typedef scalar_t__ kern_return_t ;
typedef int exception_type_t ;
struct TYPE_15__ {scalar_t__ name; } ;
struct TYPE_14__ {scalar_t__ name; } ;
struct TYPE_13__ {scalar_t__ mig_vers; scalar_t__ if_vers; scalar_t__ mig_encoding; scalar_t__ int_rep; scalar_t__ char_rep; scalar_t__ float_rep; } ;
struct TYPE_12__ {scalar_t__ msgh_local_port; int msgh_bits; int msgh_id; int msgh_size; } ;
struct TYPE_16__ {TYPE_4__ thread; TYPE_3__ task; TYPE_2__ NDR; TYPE_1__ hdr; } ;
typedef TYPE_5__ exc_msg ;
struct TYPE_18__ {scalar_t__ exception_port; } ;
struct TYPE_17__ {int pid; } ;
struct TYPE_11__ {scalar_t__ mig_encoding; scalar_t__ int_rep; scalar_t__ char_rep; scalar_t__ float_rep; } ;
typedef TYPE_6__ RDebug ;
typedef int NDR_record_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_10__ VAR_3 ;
 int FUNC_0 (char*) ;
 TYPE_9__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4 (RDebug *VAR_5, exc_msg *VAR_6) {
 kern_return_t VAR_7;




 if (VAR_6->hdr.msgh_local_port != VAR_4.exception_port) {
  return 0;
 }

 if (!(VAR_6->hdr.msgh_bits & VAR_1)) {
  return 0;
 }


 if (VAR_6->hdr.msgh_id > 2405 || VAR_6->hdr.msgh_id < 2401) {
  return 0;
 }

 if (VAR_6->hdr.msgh_size <
     sizeof (mach_msg_header_t) + sizeof (mach_msg_body_t) +
      2 * sizeof (mach_msg_port_descriptor_t) +
      sizeof (NDR_record_t) + sizeof (exception_type_t) +
      sizeof (mach_msg_type_number_t) +
      sizeof (mach_exception_data_t))
  return 0;

 if (VAR_6->NDR.mig_vers != VAR_2 ||
     VAR_6->NDR.if_vers != VAR_2 ||
     VAR_6->NDR.mig_encoding != VAR_3.mig_encoding ||
     VAR_6->NDR.int_rep != VAR_3.int_rep ||
     VAR_6->NDR.char_rep != VAR_3.char_rep ||
     VAR_6->NDR.float_rep != VAR_3.float_rep) {
  return 0;
 }
 if (FUNC_3 (VAR_5->pid) != VAR_6->task.name) {




  VAR_7 = FUNC_1 (FUNC_2 (), VAR_6->task.name);
  if (VAR_7 != VAR_0) {
   FUNC_0 ("validate_mach_message: failed to deallocate task port\n");
  }
  VAR_7 = FUNC_1 (FUNC_2 (), VAR_6->thread.name);
  if (VAR_7 != VAR_0) {
   FUNC_0 ("validate_mach_message2: failed to deallocated task port\n");
  }
  return 0;
 }
 return 1;

}
