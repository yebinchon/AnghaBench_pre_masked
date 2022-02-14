
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WaitEventIPC ;
__attribute__((used)) static const char *
FUNC_0(WaitEventIPC VAR_0)
{
 const char *VAR_1 = "unknown wait event";

 switch (VAR_0)
 {
  case 164:
   VAR_1 = "BgWorkerShutdown";
   break;
  case 163:
   VAR_1 = "BgWorkerStartup";
   break;
  case 162:
   VAR_1 = "BtreePage";
   break;
  case 161:
   VAR_1 = "CheckpointDone";
   break;
  case 160:
   VAR_1 = "CheckpointStart";
   break;
  case 159:
   VAR_1 = "ClogGroupUpdate";
   break;
  case 158:
   VAR_1 = "ExecuteGather";
   break;
  case 157:
   VAR_1 = "Hash/Batch/Allocating";
   break;
  case 156:
   VAR_1 = "Hash/Batch/Electing";
   break;
  case 155:
   VAR_1 = "Hash/Batch/Loading";
   break;
  case 154:
   VAR_1 = "Hash/Build/Allocating";
   break;
  case 153:
   VAR_1 = "Hash/Build/Electing";
   break;
  case 152:
   VAR_1 = "Hash/Build/HashingInner";
   break;
  case 151:
   VAR_1 = "Hash/Build/HashingOuter";
   break;
  case 150:
   VAR_1 = "Hash/GrowBatches/Allocating";
   break;
  case 149:
   VAR_1 = "Hash/GrowBatches/Deciding";
   break;
  case 148:
   VAR_1 = "Hash/GrowBatches/Electing";
   break;
  case 147:
   VAR_1 = "Hash/GrowBatches/Finishing";
   break;
  case 146:
   VAR_1 = "Hash/GrowBatches/Repartitioning";
   break;
  case 145:
   VAR_1 = "Hash/GrowBuckets/Allocating";
   break;
  case 144:
   VAR_1 = "Hash/GrowBuckets/Electing";
   break;
  case 143:
   VAR_1 = "Hash/GrowBuckets/Reinserting";
   break;
  case 142:
   VAR_1 = "LogicalSyncData";
   break;
  case 141:
   VAR_1 = "LogicalSyncStateChange";
   break;
  case 140:
   VAR_1 = "MessageQueueInternal";
   break;
  case 139:
   VAR_1 = "MessageQueuePutMessage";
   break;
  case 138:
   VAR_1 = "MessageQueueReceive";
   break;
  case 137:
   VAR_1 = "MessageQueueSend";
   break;
  case 136:
   VAR_1 = "ParallelBitmapScan";
   break;
  case 135:
   VAR_1 = "ParallelCreateIndexScan";
   break;
  case 134:
   VAR_1 = "ParallelFinish";
   break;
  case 133:
   VAR_1 = "ProcArrayGroupUpdate";
   break;
  case 132:
   VAR_1 = "Promote";
   break;
  case 131:
   VAR_1 = "ReplicationOriginDrop";
   break;
  case 130:
   VAR_1 = "ReplicationSlotDrop";
   break;
  case 129:
   VAR_1 = "SafeSnapshot";
   break;
  case 128:
   VAR_1 = "SyncRep";
   break;

 }

 return VAR_1;
}
